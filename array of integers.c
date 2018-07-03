public static boolean sumUpToCBySorting(int[] arr, int C){
  int[] arrCopy = arr.clone(); // make local copy of array
  Arrays.sort(arrCopy); // O(nlogn)
  
  int ptr1 = 0;
  int ptr2 = arr.length-1;
  
  // Block of code is O(n)
  while(ptr1 < ptr2){ // while ptr1 is to the left of ptr2
    int sum = arrCopy[ptr1] + arrCopy[ptr2];
    if(sum == C) return true;
    else if(sum < C) ptr1++;
    else ptr2--;
  }
  return false;
  }
