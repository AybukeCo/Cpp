
int ovenTime() {
    return 40;
}

int remainingOvenTime() { 
    int actualMinutesInOven = 0;
    int ovenTime = 40;
    remainingOvenTime = ovenTime - actualMinutesInOven;
    return remainingOvenTime;
}

int preparationTime() {
    int numberOfLayers = 6;
    preparationTime = numberOfLayers * 2;
    return preparationTime;
}


int elapsedTime() {
    elapsedTime = preparationTime + actualMinutesInOven;
    return elapsedTime;
}
