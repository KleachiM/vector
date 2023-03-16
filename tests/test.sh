echo
echo ============== "Sh tests" =========================
echo

echo "Testing: specified empty string ... \c"
param="../../tests/files/empty.txt"
if ../../cmake-build-debug/vector < $param > /dev/null
  then
    echo ok
  else
    echo not ok # program work with empty string
    ../../cmake-build-debug/vector < $param
    exit 1
fi

echo "Testing: specified double and string, must crash with exit code 1 ... \c"
param="../../tests/files/doubleWithStr.txt"
if ! ../../cmake-build-debug/vector < $param > /dev/null
  then
    echo ok
  else
    echo not ok # program work with double and string
    ../../cmake-build-debug/vector < $param
    exit 1
fi

echo "Testing: specified only double ... \c"
param="../../tests/files/onlyDouble.txt"
if  ../../cmake-build-debug/vector < $param > /dev/null
  then
    echo ok
  else
    echo not ok # program not work with only double
    ../../cmake-build-debug/vector < $param
    exit 1
fi

echo "Testing: specified very big double , must crash with exit code 1 ... \c"
param="../../tests/files/veryBigDouble.txt"
if ! ../../cmake-build-debug/vector < $param > /dev/null
  then
    echo ok
  else
    echo not ok # program work with very big double
    ../../cmake-build-debug/vector < $param
    exit 1
fi

echo
echo ============== "End sh tests" =====================