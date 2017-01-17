# Mediator Pattern
Mediator模式即中介者模式，用一个中介对象来封装一系列的对象交互。中介者使各对象不需要显式地相互引用，从而使其耦合松散，而且可以独立地改变它们之间的交互。Mediator模式的实现关键就是将对象Colleague之间的通信封装到一个类种单独处理，为了模拟Mediator模式的功能，这里给每个Colleague对象一个string型别以记录其状态，并通过状态改变来演示对象之间的交互和通信。
Mediator模式是一种很有用并且很常用的模式，`它通过将对象间的通信封装到一个类中，将多对多的通信转化为一对多的通信，降低了系统的复杂性`。Mediator还获得系统解耦的特性，通过Mediator，各个Colleague就不必维护各自通信的对象和通信协议，降低了系统的耦合性，Mediator和各个Colleague就可以相互独立地修改了。此外，Mediator模式还有一个很显著的特点就是将控制集中，集中的优点就是便于管理，也正式符合了OO设计中的每个类的职责要单一和集中的原则。其适用于以下场景：
- 一组对象以定义良好但是复杂的方式进行通信。产生的相互依赖关系结构混乱且难以理解；
- 一个对象引用其他很多对象并且直接与这些对象通信，导致难以复用该对象；
- 想定制一个分布在多个类中的行为，而又不想生成太多的子类。
总结一下，Mediator模式具有以下特点：
- 减少了子类生成，Mediator将原本分布于多个对象间的行为集中在一起。改变这些行为只需生成Meditator的子类即可。这样各个Colleague类可被重用；
- 它将各Colleague解耦，Mediator有利于各Colleague间的松耦合。你可以独立的改变和复用各Colleague类和Mediator类；
- 它简化了对象协议，用Mediator和Colleague间的一对多的交互来代替多对多的交互。一对多的关系更容易理解、维护和扩展；
- 它对对象如何协作进行了抽象，将中介作为一个独立的概念并将其封装在一个对象中，使你将注意力从对象各自本身的行为转移到它们之间的交互上来。这有助于弄清楚一个系统中的对象是如何交互的；
- 它使控制集中化，中介者模式将交互的复杂性变为中介者的复杂性。因为中介者封装了协议，它可能变得比任一个Colleague都复杂。这可能使得中介者自身成为一个难于维护的庞然大物。

外观模式与中介者模式的不同之处在于它是对一个对象子系统进行抽象，从而提供了一个更为方便的接口；外观模式的协议是单向的，即外观模式向子系统提出请求，但反过来则不行；而对于中介者模式，是进行多个对象之间的协作，通信是多向的。