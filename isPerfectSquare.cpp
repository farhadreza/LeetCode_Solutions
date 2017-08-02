bool isPerfectSquare(int num) {
       int root = 0, bit = 1 << 15;
       while (bit > 0) {
        root |= bit;
        if (root > num / root) {    // if root * root > num
            root ^= bit;    // set the bit back to 0
        }
        bit >>= 1;
       }
      return root * root == num;
}