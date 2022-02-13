//
// Created by Raffaele Montella on 15/07/21.
//

#ifndef CHANDLERY_HPP
#define CHANDLERY_HPP

#include <QObject>
#include <QtPlugin>
#include <FairWindSdk/FairWindApp.hpp>
#include <FairWindSdk/IFairWindApp.hpp>


namespace fairwind::apps::chandlery {
    class Chandlery : public ::fairwind::apps::IFairWindApp {
        Q_OBJECT
        Q_PLUGIN_METADATA(IID IID_FAIRWIND_APPS FILE "manifest.json")
        Q_INTERFACES(fairwind::apps::IFairWindApp)

    public:
        ~Chandlery() = default;

        // App lifecycle
        void onCreate() override;
        void onStart() override;

        void onResume() override;
        void onPause() override;
        void onStop() override;
        void onDestroy() override;

        void onConfigChanged() override;
    private:


    };
}

#endif //CHANDLERY_HPP
