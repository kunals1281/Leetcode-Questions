class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int distance = 0;
        int fuelConsumed = 0;
        while (mainTank > 0) {
            mainTank--;
            fuelConsumed++;
            distance += 10;
            if (fuelConsumed % 5 == 0 && additionalTank > 0) {
                additionalTank--;
                mainTank++;
            }
        }
        return distance;
    }
};
