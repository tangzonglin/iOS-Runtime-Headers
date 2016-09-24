/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
 */

@interface MPSImage : NSObject {
    struct MPSDevice { int (**x1)(); struct MPSDevice {} *x2; id x3; struct MPSDeviceFreeList {} x4; struct MTLLibraryNode {} *x5; /* Warning: unhandled array encoding: '[2[2[2@]]][556{MPSPixelCapabilities=b1b1b1b1b1b2b1}]{MPSGPUInfo=b8b8b8b16b24}[26^{MPSLibrary}]}' */ id x6[2][2][2]; struct MPSGPUInfo { unsigned int x_7_1_1 : 8; unsigned int x_7_1_2 : 8; unsigned int x_7_1_3 : 8; unsigned int x_7_1_4 : 16; unsigned int x_7_1_5 : 24; } x7; struct MPSLibrary {} *x8[26]; } * _device;
    unsigned int  _featureChannels;
    unsigned int  _featureChannelsLayout;
    unsigned int  _height;
    NSString * _label;
    unsigned int  _numberOfImages;
    struct MPSPixelInfo { 
        unsigned int pixelFormat : 10; 
        unsigned int chunkSize : 6; 
        unsigned int chunkWidth : 4; 
        unsigned int chunkHeight : 4; 
        unsigned int pixelStyle : 4; 
        unsigned int colorModel : 4; 
        unsigned int bitDepth : 8; 
        unsigned int isSigned : 1; 
        unsigned int isClamped : 1; 
        unsigned int isInteger : 1; 
        unsigned int canFilter : 1; 
        unsigned int canRender : 1; 
        unsigned int canWrite : 1; 
        unsigned int canMultisample : 1; 
        unsigned int isSupported : 1; 
        unsigned int _padding : 16; 
    }  _pixelInfo;
    struct MPSAutoTexture { 
        <MTLTexture> *_texture; 
        MTLTextureDescriptor *_descriptor; 
        <MTLDevice> *_device; 
        MPSCommandBufferImageCache *_cache; 
        int _twiddled; 
    }  _texture;
    unsigned int  _textureType;
    unsigned int  _width;
}

@property (nonatomic, readonly, retain) <MTLDevice> *device;
@property (nonatomic, readonly) unsigned int featureChannels;
@property (nonatomic, readonly) unsigned int featureChannelsLayout;
@property (nonatomic, readonly) unsigned int height;
@property (copy) NSString *label;
@property (nonatomic, readonly) unsigned int numberOfImages;
@property (nonatomic, readonly) unsigned int pixelFormat;
@property (nonatomic, readonly) unsigned long pixelSize;
@property (nonatomic, readonly) unsigned int precision;
@property (nonatomic, readonly) <MTLTexture> *texture;
@property (nonatomic, readonly) unsigned int textureType;
@property (nonatomic, readonly) unsigned int usage;
@property (nonatomic, readonly) unsigned int width;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)debugDescription;
- (id)device;
- (unsigned int)featureChannels;
- (unsigned int)featureChannelsLayout;
- (unsigned int)height;
- (id)init;
- (id)initWithDescriptor:(id)arg1 featureChannels:(unsigned int)arg2 featureChannelsLayout:(unsigned int)arg3 onDevice:(id)arg4;
- (id)initWithDevice:(id)arg1 imageDescriptor:(id)arg2;
- (id)initWithTexture:(id)arg1 featureChannels:(unsigned int)arg2;
- (id)initWithTexture:(id)arg1 featureChannels:(unsigned int)arg2 featureChannelsLayout:(unsigned int)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)label;
- (unsigned int)numberOfImages;
- (unsigned int)pixelFormat;
- (unsigned long)pixelSize;
- (unsigned int)precision;
- (void)setLabel:(id)arg1;
- (unsigned int)setPurgeableState:(unsigned int)arg1;
- (id)texture;
- (unsigned int)textureType;
- (unsigned int)usage;
- (unsigned int)width;

@end