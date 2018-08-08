#ifndef Q_CCP_PLUGIN_HEADER
#define Q_CCP_PLUGIN_HEADER

#include "ccStdPluginInterface.h"

class qCCP : public QObject, public ccStdPluginInterface
{
    Q_OBJECT
    Q_INTERFACES(ccStdPluginInterface)
    Q_PLUGIN_METADATA(IID "ccorp.cloudcompare.plugin.qCCP")

public:
    explicit qCCP(QObject* parent = 0);

    //inherited from ccPluginInterface
    virtual QString getName() const override { return "Qt CloudCompare Plugin"; }
    virtual QString getDescription() const override { return "Qt CloudCompare Plugin Demo"; }
    virtual QIcon getIcon() const override;

    //inherited from ccStdPluginInterface
    virtual void getActions(QActionGroup& group) override;

protected slots:
    //! Slot called when associated ation is triggered
    void doAction();

protected:
    //! Associated action
    QAction* m_action;
};

#endif // QCCP_H
