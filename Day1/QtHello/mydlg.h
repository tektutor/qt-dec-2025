#include <QDialog>
#include <QPushButton>
#include <QVBoxLayout>

class MyDlg : public QDialog {
private:
	QPushButton *pHelloBttn, *pExitBttn;
	QVBoxLayout *pLayout;
public:
	MyDlg();
};
