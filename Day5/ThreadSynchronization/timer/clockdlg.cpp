#include "clockdlg.h"

ClockDlg::ClockDlg() {
	pHours = new QLabel("");
	pMins = new QLabel("");
	pSecs = new QLabel("");

	pSeparator1 = new QLabel(":");
	pSeparator2 = new QLabel(":");

	QFont font("Seven Segment", 50);

	pHours->setFont( font );
	pMins->setFont( font );
	pSecs->setFont( font );
	pSeparator1->setFont( font );
	pSeparator2->setFont( font );

	pLayout = new QHBoxLayout;

	pLayout->addWidget ( pHours );
	pLayout->addWidget ( pSeparator1 );
	pLayout->addWidget ( pMins );
	pLayout->addWidget ( pSeparator2 );
	pLayout->addWidget ( pSecs );

	setLayout( pLayout );

	pTimer = new QTimer;
	connect ( pTimer, SIGNAL( timeout() ), this, SLOT( updateSeconds() ) );
	pTimer->start(1000);

	QTime time = QTime::currentTime();

	hours = time.hour();
	minutes = time.minute();
	seconds = time.second();

	pHours->setText( QString("%1").arg(hours,2,10,QChar('0')) );
	pMins->setText( QString("%1").arg(minutes,2,10,QChar('0')) );
	pSecs->setText( QString("%1").arg(seconds,2,10,QChar('0')) );

}

void ClockDlg::updateSeconds() {

	qDebug() << "Inside updateSeconds slot method ...";

	if ( seconds < 59 ) {
		++seconds;
		if ( seconds == 59 ) updateMinutes();
	}
	else
		seconds = 0;

	pSecs->setText( QString("%1").arg(seconds,2,10,QChar('0')) );
	blink();

}

void ClockDlg::blink() {
	static bool isRed = false;
	if ( isRed == false ) {
		pSeparator1->setStyleSheet("color: red;");
		pSeparator2->setStyleSheet("color: red;");
		isRed = true;
	}
	else {
		pSeparator1->setStyleSheet("color: black;");
		pSeparator2->setStyleSheet("color: black;");
		isRed = false; 
	}
}

void ClockDlg::updateMinutes() {
	if ( minutes < 59 ) {
		++minutes;
		if ( minutes == 59 ) updateHours();
	}
	else
		minutes = 0;

	pMins->setText( QString("%1").arg(minutes,2,10,QChar('0')) );

}

void ClockDlg::updateHours() {
	if ( hours < 12 ) 
		++hours;
	else
		hours = 1;

	pHours->setText( QString("%1").arg(hours,2,10,QChar('0')) );
}

ClockDlg::~ClockDlg() {

}


