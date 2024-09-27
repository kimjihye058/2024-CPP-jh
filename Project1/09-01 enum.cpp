#include <iostream>

using namespace std;

enum FoodStyle {
    KOREAN,		// 0
    JAPANESE,	// 1
    CHINESE		// 2
};

int main(void)
{
    // 0 : 한식, 1 : 일식, 2 : 중식
    Style style = KOREAN;

    switch (style)
    {
    case KOREAN:
        cout << "한식" << endl;
        break;
    case JAPANESE:
        cout << "일식" << endl;
        break;
    case CHINESE:
        cout << "중식" << endl;
        break;
    }
}
