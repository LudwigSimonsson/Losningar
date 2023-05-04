switch (operation) {
    case 1:
        // Koda för operation 1
        break;
    case 2:
    case 3:
    case 4:
    case 5:
        switch (operation) { //Detär gör att om valet infaller emellan 2-5 så kommer dessa hanteras snabbare än övriga delar
            case 2:
                // Koda för operation 2
                break;
            case 3:
                // Koda för operation 3
                break;
            case 4:
                // Koda för operation 4
                break;
            case 5:
                // Koda för operation 5
                break;
            default:
                // Felaktig operation
                break;
        }
        break;
    // ...
    case 100:
        // Koda för operation 100
        break;
    default:
        // Felaktig operation
        break;
}
