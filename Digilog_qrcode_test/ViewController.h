//
//  ViewController.h
//  Digilog_qrcode_test
//
//  Created by C-ty on 2015/7/16.
//  Copyright (c) 2015年 Cty. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController <AVCaptureMetadataOutputObjectsDelegate>

@property (strong, nonatomic) IBOutlet UIView *viewPreview;
@property (strong, nonatomic) IBOutlet UIButton *btnStart;
@property (nonatomic, strong) AVCaptureSession *captureSession;
@property (nonatomic, strong) AVCaptureVideoPreviewLayer *videoPreviewLayer;
@property (strong, nonatomic) IBOutlet UILabel *resLabel;

@property (nonatomic, strong) AVAudioPlayer *audioPlayer;

-(void)loadBeepSound;
@end

