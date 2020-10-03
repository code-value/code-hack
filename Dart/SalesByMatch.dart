void main() {
  // this is a solution for a problem in hackerrank solved in dart
  // https://www.hackerrank.com/challenges/sock-merchant/problem
  // return an integer representing the number of matching pairs
  sockMerchant(10, [1, 1, 3, 1, 2, 1, 3, 3, 3, 3]);
}

int sockMerchant(n, ar) {
  var wadah = 0;
  ar.sort();
  var i = 0;
  while (i < ar.length - 1) {
    if (ar[i] == ar[i + 1]) {
      wadah++;
      ar.removeRange(i, i + 2);
    } else {
      i++;
    }
  }
  return wadah;
}
