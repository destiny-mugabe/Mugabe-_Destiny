EXPLANATION ABOUT MY CODE
1. Laptop is the base class. It stores brand and price and defines showLaptopDetails().
2. GamingLaptop inherits from Laptop and adds a gpu member and showGamingDetails().
3. HighEndGamingLaptop inherits from GamingLaptop. It can use members inherited through both earlier classes and adds its own ram member.
4. In main(), a HighEndGamingLaptop object is created and its display function shows details from all three classes.
The constructors use Laptop(b, p) and GamingLaptop(b, p, g) to initialize the parent-class parts of the object.
Access Specifiers
- protected: brand, price, and gpu can be accessed inside their classes and derived classes, but not directly from main().
- private: ram can only be accessed directly inside HighEndGamingLaptop.
- public: the constructors and display functions can be called from outside their classes.