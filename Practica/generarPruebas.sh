echo Compilando...
make
make debug
echo Generando pruebas...
./debug 35 tests/test1 > pruebas/debug_35_test1
./debug 35 tests/test2 > pruebas/debug_35_test2
./debug 35 tests/test3 > pruebas/debug_35_test3
./debug 35 tests/testSmall_20000 > pruebas/debug_35_testS
./debug 35 tests/testMedium_100000 > pruebas/debug_35_testM
./energy 1000 tests/test1 > pruebas/en_1000_test1
./energy 1000 tests/test2 > pruebas/en_1000_test2
./energy 1000 tests/test3 > pruebas/en_1000_test3
./energy 1000 tests/testSmall_20000 > pruebas/en_1000_testS
./energy 1000 tests/testMedium_100000 > pruebas/en_1000_testM
echo Fin.
