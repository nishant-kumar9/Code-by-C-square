//To print square pattern of stars
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

////To print right angled triangle pattern of stars
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

//To print inverted right angled triangle pattern of stars
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

//To print pyramid pattern of stars
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

//To print inverted pyramid pattern of stars
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

//To print diamond pattern of stars
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    
    // Upper part
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    
    // Lower part
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}

//To print number pyramid pattern
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}

//To print Floyd's triangle
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int count = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    return 0;
}

//To print Pascal's triangle
#include <iostream>
using namespace std;

int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++)
        fact *= i;
    return fact;
}

int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++) {
            cout << combination(i, j) << "   ";
        }
        cout << endl;
    }
    return 0;
}

//To print hollow rectangle pattern of stars
#include <iostream>
using namespace std;

int main() {
    int rows = 5, cols = 15;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if (i == 1 || i == rows || j == 1 || j == cols) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

//To print hollow square pattern of stars
#include <iostream>
using namespace std;

int main() {
    int rows = 5, cols = 10;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if (i == 1 || i == rows || j == 1 || j == cols) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

//To print hollow right angled triangle pattern of stars
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == n) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}

//To print hollow inverted right angled triangle pattern of stars
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == n) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}

//To print hollow pyramid pattern of stars
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            if (k == 1 || k == 2 * i - 1 || i == n) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

//To print hollow inverted pyramid pattern of stars
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}

//To print hollow diamond pattern of stars
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    
    // Upper part
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    
    // Lower part
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    
    return 0;
}

//To print hollow number pyramid pattern
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n) {
                cout << i << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}

//To print hollow Floyd's triangle
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int count = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == n) {
                cout << count << " ";
            } else {
                cout << "  ";
            }
            count++;
        }
        cout << endl;
    }
    return 0;
}

//To print hollow Pascal's triangle
#include <iostream>
using namespace std;

int main() {
    int n = 5; // Height of Pascal's triangle

    for (int i = 0; i < n; i++) {
        // Printing leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << "  ";
        }

        // Printing the hollow Pascal's triangle
        for (int j = 0; j <= i; j++) {
            // Print '*' for first and last column, or for the first row
            if (j == 0 || j == i ||
                i == n - 1) {
                cout << "*   ";
            } else {
                cout << "    ";
            }
        }
        cout << endl;
    }
}

//To print hollow diamond pattern of numbers
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    
    // Upper part
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                cout << i << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    
    // Lower part
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                cout << i << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    
    return 0;
}

//To print hollow diamond pattern of alphabets
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    char ch = 'A';
    
    // Upper part
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                cout << ch << " ";
            } else {
                cout << "  ";
            }
        }
        ch++;
        cout << endl;
    }
    
    // Lower part
    ch--;
    for (int i = n - 1; i >= 1; i--) {
        ch--;
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                cout << ch << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    
    return 0;
}

//To print hollow diamond pattern of alphabets
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    char ch = 'A';
    
    // Upper part
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                cout << ch << " ";
            } else {
                cout << "  ";
            }
        }
        ch++;
        cout << endl;
    }
    
    // Lower part
    ch--;
    for (int i = n - 1; i >= 1; i--) {
        ch--;
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                cout << ch << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    
    return 0;
}

