#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <MediaPlayer/MediaPlayer.h>
#import "BPAudioPlayer.h"
#import "BPSceneListViewController.h"
#import "BPInfoViewController.h"
#import "BPScene.h"

@class BPSceneManager;

@interface BPSceneViewController : UIViewController<AVAudioPlayerDelegate,UIAccelerometerDelegate,BPSpellDelegate> {
	BPSceneManager *_sceneManager;
	AVAudioPlayer *_audioPlayer;
	BPAudioPlayer *_spellTextAudioPlayer;
	UILabel *_imageTitleLabel;
	UIWebView *_imageTitleWebView;
	UIImageView *_imageView;
	UIView *_touchOverlayView;
	UIToolbar *_toolbar;
	UIBarButtonItem *_nameButton;
	UIBarButtonItem *_soundButton;
	UIBarButtonItem *_spellButton;
	UIBarButtonItem *_tocButton;
	UIButton *_infoButton;
	UIButton *_nextButton;
	UIButton *_previousButton;	
	MPVolumeView *_volumeView;
	UIAccelerationValue _accelerometer[3];
	CFTimeInterval _lastTimeMotionDetected;
	BPSceneListViewController *_sceneListViewController;
	BPInfoViewController *_infoViewController;
	BOOL _displayedFirstScene;
	BOOL _playSoundNext;
	BOOL _sceneTransitionInProgress;
}

@property(nonatomic, retain) BPSceneManager *sceneManager;
@property(nonatomic, retain) IBOutlet UIWebView *imageTitleWebView;
@property(nonatomic, retain) IBOutlet UIView *touchOverlayView;
@property(nonatomic, retain) IBOutlet UIToolbar *toolbar;
@property(nonatomic, retain) IBOutlet UIBarButtonItem *nameButton;
@property(nonatomic, retain) IBOutlet UIBarButtonItem *soundButton;
@property(nonatomic, retain) IBOutlet UIBarButtonItem *spellButton;
@property(nonatomic, retain) IBOutlet UIBarButtonItem *tocButton;
@property(nonatomic, retain) IBOutlet UIButton *infoButton;
@property(nonatomic, retain) IBOutlet UIButton *nextButton;
@property(nonatomic, retain) IBOutlet UIButton *previousButton;
@property(nonatomic, retain) MPVolumeView *volumeView;
@property(nonatomic, retain) BPSceneListViewController *sceneListViewController;
@property(nonatomic, retain) BPInfoViewController *infoViewController;

-(IBAction)playName:(id)sender;
-(IBAction)playSound:(id)sender;
-(IBAction)playSpell:(id)sender;
-(IBAction)playNameAndSound:(id)sender;

-(IBAction)displayNextScene:(id)sender;
-(void)renderNextScene;

-(IBAction)displayPreviousScene:(id)sender;
-(void)renderPreviousScene;

-(void)displaySelectedScene:(BPScene*)scene;

-(IBAction)sceneListView:(id)sender;
-(IBAction)infoView:(id)sender;

@end
