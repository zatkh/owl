/*  DO NOT EDIT THIS FILE.

    It has been auto-edited by fixincludes from:

	"fixinc/tests/inc/os/trace.h"

    This had to be done to correct non-standard usages in the
    original, manufacturer supplied header file.  */



#if defined( DARWIN_OS_TRACE_1_CHECK )
_os_trace_verify_printf(const char *msg, ...)
#endif  /* DARWIN_OS_TRACE_1_CHECK */


#if defined( DARWIN_OS_TRACE_2_CHECK )
#if __BLOCKS__
typedef void (^os_trace_payload_t)(xpc_object_t xdict);
#endif
#endif  /* DARWIN_OS_TRACE_2_CHECK */


#if defined( DARWIN_OS_TRACE_3_CHECK )
#if __BLOCKS__
__API_AVAILABLE(macosx(10.10), ios(8.0), watchos(2.0), tvos(8.0))
OS_EXPORT OS_NOTHROW OS_NOT_TAIL_CALLED
void
_os_trace_with_buffer(void *dso, const char *message, uint8_t type, const void *buffer, size_t buffer_size, os_trace_payload_t payload);
#endif

#if __BLOCKS__
__OSX_AVAILABLE_STARTING(__MAC_10_12, __IPHONE_10_0)
OS_EXPORT OS_NOTHROW
void
_os_trace_internal(void *dso, uint8_t type, const char *format, const uint8_t *buf, size_t buf_size, os_trace_payload_t payload);
#endif
#endif  /* DARWIN_OS_TRACE_3_CHECK */