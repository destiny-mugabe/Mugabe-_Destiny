EXPLANATION ABOUT THIS MY CODE
1. Laptop class: This is the parent class. It defines the virtual function showPurpose().
2. GamingLaptop class: Inherits from Laptop and overrides showPurpose() to display a message about gaming.
3. BusinessLaptop class: Inherits from Laptop and overrides showPurpose() to display a message about office work.
4. Base-class pointer: Laptop* laptop; declares a pointer that can point to a Laptop object or an object of a derived class.
5. First function call: laptop = &gaming; makes the pointer refer to the gaming laptop. Calling laptop->showPurpose() displays the gaming message.
6. Second function call: laptop = &business; makes the same pointer refer to the business laptop. The same function call now displays the office-work message.
Because showPurpose() is virtual, C++ selects the correct overridden function according to the object the pointer refers to at runtime.
Important C++ Terms
- virtual: Allows the correct overridden function to be selected at runtime through a base-class pointer or reference.
- override: Indicates that a derived-class function overrides a virtual function from its parent.
- Laptop* laptop: Declares a pointer to the parent class.
- &gaming: Gets the address of the gaming laptop object.
- ->: Accesses a member through a pointer.