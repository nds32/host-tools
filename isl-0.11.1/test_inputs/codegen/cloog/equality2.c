for (int c0 = 1; c0 <= 10000; c0 += 1)
  for (int c1 = 1000; c1 <= 1016; c1 += 1)
    for (int c2 = 1; c2 < 2 * c1 - 1998; c2 += 1) {
      if (c2 + 1999 == 2 * c1 && c1 <= 1008)
        S2(c0, c1, 2 * c1 - 1999, 1, c0, 2 * c1 - 1000, 1, 2, c0, c1 - 499, 2 * c1 - 1999, c0, 2 * c1 - 1999, c1 - 999, c1 - 999);
      if (c1 % 2 == 0 && c2 == 1)
        S1(c0, c1, 1, 2, c0, (c1 + 2) / 2, c1 - 999, c0, c1 - 999, (c1 - 998) / 2, (c1 - 998) / 2);
    }
