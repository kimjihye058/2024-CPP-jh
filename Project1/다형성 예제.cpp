#include <iostream>
#include <string>

using namespace std;

// 부모 클래스 Vehicle (탈 것)
class Vehicle {
protected:
    int numWheels;      // 바퀴 개수
    string color;       // 색깔
    int maxPassengers;  // 탑승 가능 인원

public:
    Vehicle(int wheels, string color, int passengers)
        : numWheels(wheels), color(color), maxPassengers(passengers) {}

    // 탈 것의 기본 정보를 출력하는 메소드
    void showInfo() {
        cout << "바퀴 개수: " << numWheels << "개" << endl;
        cout << "색깔: " << color << "색" << endl;
        cout << "최대 탑승 가능 인원: " << maxPassengers << "명" << endl;
    }
};

// 자식 클래스 Car (자동차)
class Car : public Vehicle {
private:
    string fuelType;  // 연료 종류 (가솔린, 디젤 등)

public:
    Car(string color, string fuelType)
        : Vehicle(4, color, 5), fuelType(fuelType) {}

    // 자동차의 특성을 출력하는 메소드
    void showCarInfo() {
        cout << "탈 것은 자동차 입니다." << endl;
        showInfo();
        cout << "이 자동차는 " << fuelType << " 연료를 사용합니다." << endl;
    }

    void showCar() {
        cout << "자동차 부릉 부릉~" << endl;
    }
};

// 자식 클래스 Motorcycle (오토바이)
class Motorcycle : public Vehicle {
private:
    bool hasSidecar;  // 사이드카 유무

public:
    Motorcycle(string color, bool sidecar)
        : Vehicle(2, color, 2), hasSidecar(sidecar) {}

    // 오토바이의 특성을 출력하는 메소드
    void showMotorcycleInfo() {
        cout << "탈 것은 오토바이 입니다." << endl;
        showInfo();
        if (hasSidecar) {
            cout << "이 오토바이는 사이드카가 있습니다." << endl;
        }
        else {
            cout << "이 오토바이는 사이드카가 없습니다." << endl;
        }
    }

    void showMotorcycle() {
        cout << "오토바이 부르릉~" << endl;
    }
};

// 자식 클래스 Bicycle (자전거)
class Bicycle : public Vehicle {
private:
    bool hasGear;  // 기어 유무

public:
    Bicycle(string color, bool gear)
        : Vehicle(2, color, 1), hasGear(gear) {}

    // 자전거의 특성을 출력하는 메소드
    void showBicycleInfo() {
        cout << "탈 것은 자전거 입니다." << endl;
        showInfo();
        if (hasGear) {
            cout << "이 자전거는 기어가 있습니다." << endl;
        }
        else {
            cout << "이 자전거는 기어가 없습니다." << endl;
        }
    }

    void showBicycle() {
        cout << "자전거 따르릉~" << endl;
    }
};

int main() {
    // Car 객체 생성 및 정보 출력
    Car car("빨강", "가솔린");
    car.showCarInfo();
    car.showCar();

    cout << endl;

    // Motorcycle 객체 생성 및 정보 출력
    Motorcycle motorcycle("검정", true);
    motorcycle.showMotorcycleInfo();
    motorcycle.showMotorcycle();

    cout << endl;

    // Bicycle 객체 생성 및 정보 출력
    Bicycle bicycle("파랑", false);
    bicycle.showBicycleInfo();
    bicycle.showBicycle();

    return 0;
}
