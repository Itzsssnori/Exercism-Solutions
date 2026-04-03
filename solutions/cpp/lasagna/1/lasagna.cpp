
int ovenTime() {
    return 40;
}

int remainingOvenTime(int actualMinutesInOven) {
    int result = ovenTime() - actualMinutesInOven; 
    return result; 
}

int preparationTime(int numberOfLayers) {
    return numberOfLayers * 2;  
}

int elapsedTime(int numberOfLayers, int actualMinutesInOven) {
   int time = preparationTime(numberOfLayers) + actualMinutesInOven;
    return time; 
}
