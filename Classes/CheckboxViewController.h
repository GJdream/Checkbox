#import <UIKit/UIKit.h>

@interface CheckboxViewController : UIViewController {
	BOOL checkboxSelected;
	IBOutlet UIButton *checkboxButton;
	IBOutlet UISwitch *test;
}

- (IBAction)checkboxButton:(id)sender;

@end

