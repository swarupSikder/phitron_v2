#include <iostream>
#include <cstring>
using namespace std;

class Cricketer {
public:
    int jersey_no;
    char country[50];
};

int main() {
    // Step 1: Create a dynamic object named dhoni
    Cricketer* dhoni = new Cricketer;
    cin>> dhoni->jersey_no;
    cin.ignore();
    cin>> dhoni->country;

    // Step 2: Create another dynamic object named kohli
    Cricketer* kohli = new Cricketer;

    // Trying direct assignment (shallow copy)
    // kohli = dhoni;  // Uncomment this line and observe what happens

    // Step 3: Manually copy data from dhoni to kohli (deep copy)
    kohli->jersey_no = dhoni->jersey_no;
    strcpy(kohli->country, dhoni->country);

    // Step 4: Delete the dhoni object
    delete dhoni;

    // Step 5: Print the jersey_no and country of kohli
    cout << "Jersey No: " << kohli->jersey_no << endl;
    cout << "Country: " << kohli->country << endl;

    // Clean up kohli (optional since program ends here)
    delete kohli;

    return 0;
}
