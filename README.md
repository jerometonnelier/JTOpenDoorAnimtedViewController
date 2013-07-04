JTOpenDoorAnimtedViewController
===============================

### What's it?

A single View Controller that mimics the startup animation of the AskKing Quizz app

### How to

**Create and show the View**
  
	self.viewController = [[JTOpenDoorViewController alloc] initWithViewController:self.targetController];  
	self.viewController.delegate = self;  
	self.window.rootViewController = self.viewController;
  
  
**Delegate methods**

	#pragma mark - LeveyPopListView delegates
	- (void)didFinishAnimation

At the end of the animation, if you registered as a delegate, you get the chance to replace the AppDelegate 
RootViewController with your targetedViewController as follows : 

	- (void)didFinishAnimation
	{
	    self.window.rootViewController = self.targetedViewController;   
	}

### Screenshot ⤵

![Screen](http://img607.imageshack.us/img607/8427/nvn.gif)    
