# C++ Call by Value and Call by Reference

There are two ways to pass a value or data to a function:

- Call by Value
- Call by Reference

## Call by Value

In call by value, original value will not get modified.

However, value that is being passed to the function will get locally stored by the function parameter in stack memory location.

If the value of the function parameter is changed, then it will not get changed for the current function. It will not change the value of variable inside the caller method such as **main()**.

## Call by Reference

In call by reference, original will get modified as we pass a reference(address).

Here, address of the value is passed to the function, so the actual arguments as well as formal arguments will share the same address space.

Hence, value that is changed inside the function is reflected inside as well as outside the function.

| Call by Value                                                         | Call by Reference                                                        |
| :-------------------------------------------------------------------: | :----------------------------------------------------------------------: |
| A copy of value is passed to the function                             | An address of the value is passed to the function                        |
| Changes made inside the function is not reflected on other function   | Changes made inside the function are reflected outside the function also |
| Actual and formal arguments are created in different memory locations | Actual and formal arguments are created in the same memory location      |

- Actual Arguments: The values which are passed to the function are called **Actual Arguments**.

- Formal Arguments: The variables which are declared in the function are called **Formal Arguments**.
