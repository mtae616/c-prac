struct Champion *swain = malloc(sizeof(struct Champion));
  swain->stats = malloc(sizeof(struct Stats));

  strcpy(swain->name, "Swain");
  swain->stats->health = 463;