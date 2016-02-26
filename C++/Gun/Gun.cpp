#include "Gun.h"

Gun::Gun(const std::string& model, int capacity) {
    this->amount = 0;
    this->capacity = capacity;
    this->isReady = false;
    this->model = model;
    this->totalShots = 0;
}

Gun::~Gun() {

}

int Gun::getAmount() const {
    return this->amount;
}

int Gun::getCapacity() const {
    return this->capacity;
}

bool Gun::ready() const {
    return this->isReady;
}

const std::string& Gun::getModel() const {
    return this->model;
}

int Gun::getTotalShots() const {
    return this->totalShots;
}

void Gun::prepare() {
    isReady = !isReady;
}

void Gun::reload() {
    amount = capacity;
}

void Gun::shoot() {
    if ( amount == 0 ) {
        isReady = false;
        throw OutOfRounds();
    }
    if ( !ready() ) {
        throw NotReady();
    }
    amount -= 1;
    totalShots += 1;
    std::cout << "Bang!" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Gun& gun) {
    out << "Model: " << gun.getModel() << std::endl;
    if ( gun.ready() ) {
        out << "ready" << std::endl;
    } else {
        out << "not ready" << std ::endl;
    }
    out << "rounds: (" << gun.getAmount();
    out << "/" << gun.getCapacity() << ")" << std::endl;
    out << "total: " << gun.getTotalShots() << std::endl;
    
    return out;
}
