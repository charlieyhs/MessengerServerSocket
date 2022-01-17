#ifndef DUMESSENGERCONNECTIONDIALOG_H
#define DUMESSENGERCONNECTIONDIALOG_H

#include <QDialog>

namespace Ui
{
class DuMessengerConnectionDialog;
}

namespace DuarteCorporation
{
class DuMessengerConnectionDialog : public QDialog
{
    Q_OBJECT
public:
    explicit DuMessengerConnectionDialog(QWidget *parent = nullptr);
    ~DuMessengerConnectionDialog();

    QString hostname() const
    {
        return mHostname;
    }

    quint16 port() const
    {
        return mPort;
    }
private slots:
    void on_ok_clicked();
    void on_cancel_clicked();
private:
    Ui::DuMessengerConnectionDialog *ui;
    QString mHostname;
    quint16 mPort;
};
} // end namespace DuarteCorporation

#endif // DUMESSENGERCONNECTIONDIALOG_H
