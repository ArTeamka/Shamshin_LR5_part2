#include "CUTE/cute.h"
#include "CUTE/ide_listener.h"
#include "CUTE/cute_runner.h"
#include "Shamshin_Task21.h"

using namespace cute;

// Тест 1: Проверка суммы ASCII
void testSumASCII() {
    ASSERT_EQUAL(195, SumASCII('A', 'Z')); // 65 + 90 = 155
}

// Тест 2: Проверка валидации символа
void testIsValidChar() {
    ASSERT_EQUAL(true, IsValidChar('a'));
    ASSERT_EQUAL(false, IsValidChar('\t'));
}

// Тест 3: Проверка вывода информации
void testPrintCharInfo() {
    // Тест требует мокирования вывода
}

int main() {
    suite s;
    s.push_back(CUTE(testSumASCII));
    s.push_back(CUTE(testIsValidChar));
    
    ide_listener<> listener;
    makeRunner(listener)(s, "Variant 21 Tests");
    return 0;
}