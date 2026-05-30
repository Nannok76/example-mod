#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) return false;

        auto alert = FLAlertLayer::create(
            "Ура!", 
            "Мой мод успешно собран!", 
            "ОК"
        );
        alert->show();

        return true;
    }
};
