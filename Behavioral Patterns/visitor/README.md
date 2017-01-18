# Visitor Pattern
Visitor模式即访问者模式，Visitor模式将更新（变更）封装到一个类中（访问操作），并由待更改类提供一个接收接口，则可达到效果。表示一个作用于某对象结构中的各元素的操作。它使你可以在不改变各元素的类的前提下定义作用于这些元素的新操作。访问者模式把数据结构和作用于结构上的操作之间的耦合解脱开，使得操作集合可以相对自由地演化。该模式的目的是要把处理从数据结构分离出来。访问者模式让增加新的操作很容易，因为增加新的操作就意味着增加一个新的访问者。访问者模式将有关的行为集中到一个访问者对象中。