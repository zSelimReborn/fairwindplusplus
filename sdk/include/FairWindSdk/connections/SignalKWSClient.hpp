//
// Created by Raffaele Montella on 03/06/21.
//

#ifndef FAIRWIND_SIGNALKWSCLIENT_HPP
#define FAIRWIND_SIGNALKWSCLIENT_HPP

#include <QtCore/QObject>
#include <QtWebSockets/QWebSocket>
#include <FairWindSdk/FairWindSDK.hpp>
#include <FairWindSdk/IFairWindConnection.hpp>

namespace fairwind::connections {

    class FAIRWINDSDK_LIB_DECL SignalKWSClient : public QObject, public fairwind::connections::IFairWindConnection {
    Q_OBJECT

    public:
        explicit SignalKWSClient(QObject *parent = nullptr);
        ~SignalKWSClient();

        QImage getIcon() const override;
        void onInit(QMap<QString, QVariant> params) override;
        IFairWindConnection *getNewInstance() override;
        QWidget *onSettings() override;
        QString getClassName() const override;
        void setActive(bool active) override;
        bool isActive() const override;

    signals:

        void closed();

    private slots:

        void onConnected();

        void onTextMessageReceived(QString message);

    private:
        QWebSocket m_webSocket;
        QUrl m_url;
        bool m_debug;
        bool m_active;
    };
}


#endif //FAIRWIND_SIGNALKWSCLIENT_HPP
