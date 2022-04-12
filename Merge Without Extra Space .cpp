void merge(int vec1[], int vec2[], int n, int m) {
  int i = 0, j = 0, k = n - 1;
  while (i <= k && j < m) {
    if (vec1[i] < vec2[j])
      i++;
    else {
      swap(vec2[j++], vec1[k--]);
    }
  }

  sort(vec1, vec1 + n);
  sort(vec2, vec2 + m);
}
