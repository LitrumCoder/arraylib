# arraylib

Кроссплатформенная динамическая библиотека операций над массивами `int`.

## Функции

`arr_sum`, `arr_max`, `arr_min`, `arr_average`, `arr_count_positive`,
`arr_count_negative`, `arr_count_zero`, `arr_product`, `arr_median`.

## Сборка

```
cmake -S . -B build
cmake --build build -j
```

## Тесты

```
ctest --test-dir build --output-on-failure
```

## Запуск

```
./build/app
```