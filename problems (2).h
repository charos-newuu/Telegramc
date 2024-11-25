

// Problem 1
void days2years(int &days, int &years) {
    years = days / 365;
    days = days % 365;
}

// Problem 2
double func(double *x, double *y) {
    *y = (11 * (*x) * (*x) * (*x)) / 3.0 + 5;
    return *y;
}

// Problem 3
int minsNewYear(int *hour, int *min) {
    int total_minutes_in_a_day = 24 * 60;
    int current_minutes = (*hour * 60) + *min;
    return total_minutes_in_a_day - current_minutes;
}

// Problem 4
double probability(int *A, int *B) {
    int dilya_wins = 0;
    int total_outcomes = 36;

    for (int d = 1; d <= 6; d++) {
        for (int a = 1; a <= 6; a++) {
            for (int b = 1; b <= 6; b++) {
                if (d > a && d > b) {
                    dilya_wins++;
                } else if (d == a || d == b) {
                    dilya_wins++;
                }
            }
        }
    }
    return static_cast<double>(dilya_wins) / total_outcomes;
}

// Problem 5
int presses(int *x) {
    int digit = *x % 10; // Extract the digit
    int length = 0;
    int temp = *x;

    while (temp > 0) {
        length++;
        temp /= 10;
    }

    int total_presses = 0;
    for (int i = 1; i <= digit; i++) {
        total_presses += i * length;
    }

    return total_presses;
}





