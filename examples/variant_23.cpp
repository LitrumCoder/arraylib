#include "arraylib.h"

#include <cstddef>
#include <iomanip>
#include <iostream>

int main() {
    int warehouse_load[] = {
        1200, 980, 1430, 875,
        1610, 1320, 1090, 1540
    };

    const std::size_t n = sizeof(warehouse_load) / sizeof(warehouse_load[0]);

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Вариант 23. Грузооборот складов\n";
    std::cout << "Количество складов: " << n << '\n';
    std::cout << "Объёмы грузов:";
    for (std::size_t i = 0; i < n; ++i) {
        std::cout << ' ' << warehouse_load[i];
    }
    std::cout << "\n\n";

    std::cout << "Общий грузооборот:   " << arr_sum(warehouse_load, n)     << '\n';
    std::cout << "Средний грузооборот: " << arr_average(warehouse_load, n) << '\n';
    std::cout << "Максимальный объём:  " << arr_max(warehouse_load, n)     << '\n';
    std::cout << "Минимальный объём:   " << arr_min(warehouse_load, n)     << '\n';
    std::cout << "Медиана объёмов:     " << arr_median(warehouse_load, n)  << '\n';

    return 0;
}