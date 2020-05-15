# LENTIA-GPIO
GPIO Library for STM32 written in C++.

Currently supports the STM32F3-Series



# How to use?

The Driver is Located in Folder <kbd>Library/GPIO</kbd>. LENTIA-GPIO is part of a larger Project hence the structure.

The fast way:

```cpp
#include "Library/GPIO/Pins.h"

int main(){
    	//Replace PA5 with the desired Pin
    	PA5 pa5 = PA5::getInstance();
	pa5.setModeOutputOpenDrain();
	pa5.setPullUp();
	pa5.setSpeedFast();
	pa5.init();
    
    
    	while(true);
}
```

The better practice:

```cpp
#include "Library/GPIO/Pins.h"

int main(){
   	//Replace PA5 with the desired Pin
   	PA5 *pa5 = &PA5::getInstance();
	pa5->setModeOutputOpenDrain();
	pa5->setPullUp();
	pa5->setSpeedFast();
	pa5->init();
 
    
    	while(true);
}
```

# What does it offer?

1. <kbd>All AlternateFunctions</kbd>

2. <kbd>All Output Modes</kbd>

3. <kbd>All Input Modes</kbd>

4. <kbd>setting Interrupts</kbd>

5. <kbd>Easy Output</kbd>

   ```cpp
   //write a One
   pa5->writePositive();
   //write a Zero
   pa5->writeNegative();
   ```

6. <kbd>Easy Input</kbd>

   ```cpp
   auto input = pa5->read();
   ```

   