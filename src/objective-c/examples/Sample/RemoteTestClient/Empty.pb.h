// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import <ProtocolBuffers/ProtocolBuffers.h>

// @@protoc_insertion_point(imports)

@class ObjectiveCFileOptions;
@class ObjectiveCFileOptionsBuilder;
@class PBDescriptorProto;
@class PBDescriptorProtoBuilder;
@class PBDescriptorProtoExtensionRange;
@class PBDescriptorProtoExtensionRangeBuilder;
@class PBEnumDescriptorProto;
@class PBEnumDescriptorProtoBuilder;
@class PBEnumOptions;
@class PBEnumOptionsBuilder;
@class PBEnumValueDescriptorProto;
@class PBEnumValueDescriptorProtoBuilder;
@class PBEnumValueOptions;
@class PBEnumValueOptionsBuilder;
@class PBFieldDescriptorProto;
@class PBFieldDescriptorProtoBuilder;
@class PBFieldOptions;
@class PBFieldOptionsBuilder;
@class PBFileDescriptorProto;
@class PBFileDescriptorProtoBuilder;
@class PBFileDescriptorSet;
@class PBFileDescriptorSetBuilder;
@class PBFileOptions;
@class PBFileOptionsBuilder;
@class PBMessageOptions;
@class PBMessageOptionsBuilder;
@class PBMethodDescriptorProto;
@class PBMethodDescriptorProtoBuilder;
@class PBMethodOptions;
@class PBMethodOptionsBuilder;
@class PBOneofDescriptorProto;
@class PBOneofDescriptorProtoBuilder;
@class PBServiceDescriptorProto;
@class PBServiceDescriptorProtoBuilder;
@class PBServiceOptions;
@class PBServiceOptionsBuilder;
@class PBSourceCodeInfo;
@class PBSourceCodeInfoBuilder;
@class PBSourceCodeInfoLocation;
@class PBSourceCodeInfoLocationBuilder;
@class PBUninterpretedOption;
@class PBUninterpretedOptionBuilder;
@class PBUninterpretedOptionNamePart;
@class PBUninterpretedOptionNamePartBuilder;
@class RMTEmpty;
@class RMTEmptyBuilder;



@interface RMTEmptyRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

@interface RMTEmpty : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
}

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (RMTEmptyBuilder*) builder;
+ (RMTEmptyBuilder*) builder;
+ (RMTEmptyBuilder*) builderWithPrototype:(RMTEmpty*) prototype;
- (RMTEmptyBuilder*) toBuilder;

+ (RMTEmpty*) parseFromData:(NSData*) data;
+ (RMTEmpty*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (RMTEmpty*) parseFromInputStream:(NSInputStream*) input;
+ (RMTEmpty*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (RMTEmpty*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (RMTEmpty*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface RMTEmptyBuilder : PBGeneratedMessageBuilder {
@private
  RMTEmpty* resultEmpty;
}

- (RMTEmpty*) defaultInstance;

- (RMTEmptyBuilder*) clear;
- (RMTEmptyBuilder*) clone;

- (RMTEmpty*) build;
- (RMTEmpty*) buildPartial;

- (RMTEmptyBuilder*) mergeFrom:(RMTEmpty*) other;
- (RMTEmptyBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (RMTEmptyBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end


// @@protoc_insertion_point(global_scope)