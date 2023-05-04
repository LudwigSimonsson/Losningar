int matrix_sum(int** matrix, int rows, int cols) {
    int sum = 0;
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            sum += matrix[i][j];
        }
    }
    return sum;
}
//I det optimerade exemplet är den innersta loopen den som itererar över den andra indexen (j istället för i). Detta är effektivare eftersom det ökar sannolikheten att data i matrisen redan finns i cacheminnet när det behövs. Detta beror på att minnet läses i ordning från toppen till botten, rad för rad. Genom att läsa en hel rad innan du går vidare till nästa rad kan du dra nytta av denna sekventiella läsning och förbättra referenslokaliteten.
