// A - Argument to I - Integer

class AtoiClass {
    public char charAt(int index, String s) {
        for (int i = 0; i < s.length(); i++) {
            if (i == index) {
                return s.charAt(i);
            }
        }
        throw new IndexOutOfBoundsException("Index " + index + " out of bounds for string of length " + s.length());
    }

    public int myAtoi(String s) {
        s = s.trim();
        if (s.length() == 0) {
            return 0;
        }
        int i = 0;
        long num = 0;
        int sign = 1;

        // Check for sign
        if (charAt(i, s) == '+' || charAt(i, s) == '-') {
            sign = (charAt(++i, s) == '-') ? -1 : 1;
        }

        while (i < s.length() && Character.isDigit(charAt(i, s))) {
            int digit = charAt(i++, s) - '0';

            if (num > (Integer.MAX_VALUE - digit) / 10) {
                return (sign == 1) ? Integer.MAX_VALUE : Integer.MIN_VALUE;
            }
            num = num * 10 + digit;
        }
        return (int) (sign * num);
    }

    public static void main(String[] args) {
        String str = "123";
        AtoiClass obj = new AtoiClass();
        int ans = obj.myAtoi(str);
        System.out.println(ans);
    }
}