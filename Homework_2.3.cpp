#include <iostream>
#include <string>
#include <locale.h>

struct adress {
    std::string city;
    std::string street;
    int house;
    int apartment;
    int index;
};

void output_adress(adress& user) {
    std::cout << "Город: " << user.city << "\n";
    std::cout << "Улица: " << user.street << "\n";
    std::cout << "Номер дома: " << user.house << "\n";
    std::cout << "Номер квартиры: " << user.apartment << "\n";
    std::cout << "Индекс: " << user.index << "\n" << std::endl;
};

int main() {
    setlocale(LC_ALL, "Russian");

    adress user_1 { "Москва", "Пушкина", 15, 126, 108809 };
    adress user_2 { "Краснодар", "Октябрьская", 1, 10, 350032 };
    adress user_3 { "Екатеринбург", "Фурманова", 63, 25, 620144 };
    
    output_adress(user_1);
    output_adress(user_2);
    output_adress(user_3);
    return 0;
}