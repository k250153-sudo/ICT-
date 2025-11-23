#include <iostream>
using namespace std;

class MealOrder {
public:
    string studentName;
    string meals[3];
    int mealCount;

    MealOrder() {
        mealCount = 0;
    }

    void addMeal(string meal) {
        if (mealCount < 3) {
            meals[mealCount] = meal;
            mealCount++;
            cout << meal << " added. Slots remaining: " << 3 - mealCount << endl;
        } else {
            cout << "Cannot add " << meal << ". Meal limit reached." << endl;
        }
    }

    void displayMeals() {
        cout << "Student: " << studentName << endl;
        cout << "Selected Meals: ";
        for (int i = 0; i < mealCount; i++) {
            cout << meals[i];
            if (i < mealCount - 1) cout << ", ";
        }
        cout << endl;
    }
};

int main() {
    MealOrder order;
    order.studentName = "Ahmed";

    order.addMeal("Breakfast");
    order.addMeal("Lunch");
    order.addMeal("Dinner");
    order.addMeal("Refreshments"); 

    order.displayMeals();

    return 0;
}
