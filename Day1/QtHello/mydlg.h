#include <QDialog>
#include <QPushButton>
#include <QVBoxLayout>
#include <QDebug>

class MyDlg : public QDialog {
Q_OBJECT
private:
	QPushButton *pHelloBttn, *pExitBttn;
	QVBoxLayout *pLayout;
public:
	MyDlg();
private slots:
	void onHelloButtonClicked();
	void onExitButtonClicked();
};
