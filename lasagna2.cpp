{
    int actual = 40;
    int expected = ovenTime();

    REQUIRE(expected == actual);
}

{
    int timeSpendInOven = 0;
    int neededBakeTime = 40;
    int actual = remainingOvenTime(timeSpendInOven);
    int expected{neededBakeTime - timeSpendInOven};

    REQUIRE(expected == actual);
}

{
    int timePerLayer = 2;
    int layers = 6;
    int actual = preparationTime(layers);
    int expected{timePerLayer * layers};

    REQUIRE(expected == actual);
}

{
    int timeSpendInOven = 0;
    int timePerLayer = 2;
    int layers = 12;
    int actual = elapsedTime(layers, timeSpendInOven);
    int expected{timePerLayer * layers + timeSpendInOven};

    REQUIRE(expected == actual);
}