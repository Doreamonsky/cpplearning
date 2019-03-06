# Reminder of General Problems

## IO

# Input for string

```
  cin>>s;
```

Separate string from the blank.

String is an array.

To check if the input is alphabet. We can use

```
    for(int i=0;i<s.length;i++){
        isalpha(s[i]);

        //To replace it

        if(!isalpha(s[i])){
            isalpha = ' ';
        }
    }
```
