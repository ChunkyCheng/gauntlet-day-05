# When NOT to use a pattern

## Singleton,
refuse when: <If for example, config is a singleton, its use should be avoided in another class that needs to check the config. It would be impossible to test the class independantly from the config singleton in this case.>

Instead: <concrete alternative, the new class should take in the config through its constructor (dependancy injection) so that for testing, a temp configuration could be passed in>

Testability cost: <If using singleton config, a few other units may share the global state and affect each other. With dependancy injection, a different mock configs can be tested on different units without affecting each other>

## Visitor,
refuse when: <When more subclasses may be added to the family of classes you want to add the visitor to>

Instead: <concrete alternative, a strategy pattern allows addition of new children to the parent strategy instead of adding operations with visitors>

Testability cost: <using strategy pattern you can test each by swapping the strategy being used. for visitor, every visitor needs to work for every derived class in the family>
