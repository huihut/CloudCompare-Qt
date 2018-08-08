#include "qCCP.h"
#include "CCPDlg.h"

#include <QtGui>
#include <QMainWindow>

qCCP::qCCP(QObject* parent)
    : QObject(parent)
    , m_action(0)
{
}

//把插件标签加入到“Plugins”当中
void qCCP::getActions(QActionGroup& group)
{
    //default action
    if (!m_action)
    {
        m_action = new QAction(getName(),this);
        m_action->setToolTip(getDescription());
        m_action->setIcon(getIcon());
        //connect signal
        connect(m_action, SIGNAL(triggered()), this, SLOT(doAction()));
    }

    group.addAction(m_action);
}

void qCCP::doAction()
{
    assert(m_app);
    if (!m_app)
        return;
    ccLog::Print("Click on QCCP_PLUGIN");
    CCPDlg dlg(m_app->getMainWindow());
    if (!dlg.exec())
        return;

    ccLog::Print(dlg.messageShow->text());
    ccLog::Print("Dialog Show...");
}

QIcon qCCP::getIcon() const
{
    return QIcon(QString::fromUtf8(":/CC/plugin/qCCP/qCCP.png"));
}
