#ifndef CLOCKDLG_H
#define CLOCKDLG_H

#include <QDialog>
#include <QTimer>
#include <QLabel>
#include <QHBoxLayout>
#include <QTime>
#include <QDebug>

class ClockDlg : public QDialog {
Q_OBJECT
private:
	QTimer *pTimer;
	QLabel *pHours, *pMins, *pSecs;
	QLabel *pSeparator1, *pSeparator2;
	
	int hours, minutes, seconds;

	QHBoxLayout *pLayout;
	void updateMinutes();
	void updateHours();
	void blink();
public:
	ClockDlg();
	~ClockDlg();
private slots:
	void updateSeconds();
};

#endif /* CLOCKDLG_H */

