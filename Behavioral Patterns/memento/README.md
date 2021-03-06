# Memento Pattern
Memento模式即备忘录模式，经常被用来维护可以撤销（Undo）操作的状态。`Memento模式在不破坏封装性的前提下，捕获一个对象的内部状态，并在该对象之外保存这个状态。这样以后就可将该对象恢复到原先保存的状态。`
有时有必要记录一个对象的内部状态。为了允许用户取消不确定的操作或从错误中恢复过来，需要实现检查点和取消机制，而要实现这些机制，你必须事先将状态信息保存在某处，这样才能将对象恢复到它们先前的状态。
一个备忘录是一个对象，它存储另一个对象在某个瞬间的内部状态，而后者称为备忘录的原发器。当需要设置原发器的检查点时，取消操作机制会向原发器请求一个备忘录。原发器用描述当前状态的信息初始化该备忘录。只有原发器可以向备忘录中存取信息，备忘录对其他的对象是“不可见”的。
备忘录模式适用于以下情形：
- 必须保存一个对象在某一个时刻的部分或完整状态，这样以后需要时它才能恢复到先前的状态；
- 如果一个用接口来让其它对象直接得到这些状态，将会暴露对象的实现细节并破坏对象的封装性。

Memento模式的关键就是要在不破坏封装行的前提下，捕获并保存一个类的内部状态，这样就可以利用该保存的状态实施恢复操作。在具体实现时，关键点在于Originator类是Memento的友元类，这样就使得管理备忘录的Caretaker对象，以及其它对象都不能读取、设置备忘录，只有Originator类才能进行备忘录的读取和设置。Memento的接口都声明为private，而将Originator声明为Memento的友元类。将Originator的状态保存在Memento类中，而将Memento接口private起来，也就达到了封装的功效。
由于备忘录主要是用于对对象的状态进行备份，实现了撤销操作，如果对象的状态数据很大很多时，在进行备忘时，就会很占用资源，这个是我们在实际开发时需要考虑的东西。
