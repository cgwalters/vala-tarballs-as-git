/* gstreamer-pbutils-0.10.vapi generated by vapigen, do not modify. */

[CCode (cprefix = "Gst", lower_case_cprefix = "gst_")]
namespace Gst {
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public class Discoverer : GLib.Object {
		[CCode (has_construct_function = false)]
		public Discoverer (Gst.ClockTime timeout) throws GLib.Error;
		public Gst.DiscovererInfo discover_uri (string uri) throws GLib.Error;
		public bool discover_uri_async (string uri);
		public void start ();
		public void stop ();
		[NoAccessorMethod]
		public uint64 timeout { get; set construct; }
		public virtual signal void discovered (Gst.DiscovererInfo info, GLib.Error err);
		public virtual signal void finished ();
		public virtual signal void starting ();
	}
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public class DiscovererAudioInfo : Gst.DiscovererStreamInfo {
		public uint get_bitrate ();
		public uint get_channels ();
		public uint get_depth ();
		public uint get_max_bitrate ();
		public uint get_sample_rate ();
	}
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public class DiscovererContainerInfo : Gst.DiscovererStreamInfo {
		public GLib.List<Gst.MiniObject> get_streams ();
	}
	[CCode (cheader_filename = "gst/pbutils/pbutils.h", copy_function = "gst_discoverer_info_copy")]
	public class DiscovererInfo : Gst.MiniObject {
		public GLib.List<Gst.DiscovererAudioInfo> get_audio_streams ();
		public GLib.List<Gst.DiscovererVideoInfo> get_container_streams ();
		public Gst.ClockTime get_duration ();
		public unowned Gst.Structure get_misc ();
		public Gst.DiscovererResult get_result ();
		public bool get_seekable ();
		public Gst.DiscovererStreamInfo get_stream_info ();
		public GLib.List<Gst.DiscovererStreamInfo> get_stream_list ();
		public GLib.List<Gst.MiniObject> get_streams (GLib.Type streamtype);
		public unowned Gst.TagList get_tags ();
		public unowned string get_uri ();
		public GLib.List<Gst.DiscovererVideoInfo> get_video_streams ();
	}
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public class DiscovererStreamInfo : Gst.MiniObject {
		public Gst.Caps get_caps ();
		public unowned Gst.Structure get_misc ();
		public Gst.DiscovererStreamInfo get_next ();
		public Gst.DiscovererStreamInfo get_previous ();
		public unowned string get_stream_type_nick ();
		public unowned Gst.TagList get_tags ();
		public static void list_free (GLib.List infos);
	}
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public class DiscovererVideoInfo : Gst.DiscovererStreamInfo {
		public uint get_bitrate ();
		public uint get_depth ();
		public uint get_framerate_denom ();
		public uint get_framerate_num ();
		public uint get_height ();
		public uint get_max_bitrate ();
		public uint get_par_denom ();
		public uint get_par_num ();
		public uint get_width ();
		public bool is_image ();
		public bool is_interlaced ();
	}
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public class EncodingAudioProfile : Gst.EncodingProfile {
		[CCode (has_construct_function = false)]
		public EncodingAudioProfile (Gst.Caps format, string? preset, Gst.Caps? restriction, uint presence);
	}
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public class EncodingContainerProfile : Gst.EncodingProfile {
		[CCode (has_construct_function = false)]
		public EncodingContainerProfile (string? name, string? description, Gst.Caps format, string? preset);
		public bool add_profile (owned Gst.EncodingProfile profile);
		public bool contains_profile (Gst.EncodingProfile profile);
		public unowned GLib.List<Gst.EncodingProfile> get_profiles ();
	}
	[CCode (cheader_filename = "gst/pbutils/pbutils.h", ref_function = "gst_encoding_profile_ref", unref_function = "gst_encoding_profile_unref")]
	public class EncodingProfile : Gst.MiniObject {
		public static Gst.EncodingProfile find (string targetname, string profilename, string category);
		public unowned string get_description ();
		public unowned Gst.Caps get_format ();
		public Gst.Caps get_input_caps ();
		public unowned string get_name ();
		public uint get_presence ();
		public unowned string get_preset ();
		public unowned Gst.Caps get_restriction ();
		public unowned string get_type_nick ();
		public bool is_equal (Gst.EncodingProfile b);
		public unowned Gst.EncodingProfile @ref ();
		public void set_description (string description);
		public void set_format (Gst.Caps format);
		public void set_name (string name);
		public void set_presence (uint presence);
		public void set_preset (string preset);
		public void set_restriction (Gst.Caps restriction);
		public void unref ();
	}
	[CCode (cheader_filename = "gst/pbutils/pbutils.h", ref_function = "gst_encoding_target_ref", unref_function = "gst_encoding_target_unref")]
	public class EncodingTarget : Gst.MiniObject {
		[CCode (has_construct_function = false)]
		public EncodingTarget (string name, string category, string description, GLib.List<Gst.EncodingProfile> profiles);
		public bool add_profile (owned Gst.EncodingProfile profile);
		public unowned string get_category ();
		public unowned string get_description ();
		public unowned string get_name ();
		public Gst.EncodingProfile get_profile (string name);
		public unowned GLib.List<Gst.EncodingProfile> get_profiles ();
		public static Gst.EncodingTarget load (string name, string category) throws GLib.Error;
		public static Gst.EncodingTarget load_from_file (string filepath) throws GLib.Error;
		public unowned Gst.EncodingTarget @ref ();
		public bool save () throws GLib.Error;
		public bool save_to_file (string filepath) throws GLib.Error;
		public void unref ();
	}
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public class EncodingVideoProfile : Gst.EncodingProfile {
		[CCode (has_construct_function = false)]
		public EncodingVideoProfile (Gst.Caps format, string? preset, Gst.Caps? restriction, uint presence);
		public uint get_pass ();
		public bool get_variableframerate ();
		public void set_pass (uint pass);
		public void set_variableframerate (bool variableframerate);
	}
	[CCode (cheader_filename = "gst/pbutils/pbutils.h", type_id = "gst_install_plugins_context_get_type ()")]
	[Compact]
	public class InstallPluginsContext {
		[CCode (has_construct_function = false)]
		public InstallPluginsContext ();
		public void set_xid (uint xid);
	}
	[CCode (cheader_filename = "gst/pbutils/pbutils.h", cprefix = "GST_DISCOVERER_")]
	public enum DiscovererResult {
		OK,
		URI_INVALID,
		ERROR,
		TIMEOUT,
		BUSY,
		MISSING_PLUGINS
	}
	[CCode (cheader_filename = "gst/pbutils/pbutils.h", cprefix = "GST_INSTALL_PLUGINS_")]
	public enum InstallPluginsReturn {
		SUCCESS,
		NOT_FOUND,
		ERROR,
		PARTIAL_SUCCESS,
		USER_ABORT,
		CRASHED,
		INVALID,
		STARTED_OK,
		INTERNAL_FAILURE,
		HELPER_MISSING,
		INSTALL_IN_PROGRESS
	}
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public delegate void InstallPluginsResultFunc (Gst.InstallPluginsReturn result);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public const string ENCODING_CATEGORY_CAPTURE;
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public const string ENCODING_CATEGORY_DEVICE;
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public const string ENCODING_CATEGORY_ONLINE_SERVICE;
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public const string ENCODING_CATEGORY_STORAGE_EDITING;
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public const int PLUGINS_BASE_VERSION_MAJOR;
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public const int PLUGINS_BASE_VERSION_MICRO;
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public const int PLUGINS_BASE_VERSION_MINOR;
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public const int PLUGINS_BASE_VERSION_NANO;
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static bool codec_utils_aac_caps_set_level_and_profile (Gst.Caps caps, [CCode (array_length_pos = 2.9)] uchar[] audio_config);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static unowned string codec_utils_aac_get_level ([CCode (array_length_pos = 1.9)] uchar[] audio_config);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static unowned string codec_utils_aac_get_profile ([CCode (array_length_pos = 1.9)] uchar[] audio_config);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static uint codec_utils_aac_get_sample_rate_from_index (uint sr_idx);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static bool codec_utils_h264_caps_set_level_and_profile (Gst.Caps caps, [CCode (array_length_pos = 2.9)] uchar[] sps);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static unowned string codec_utils_h264_get_level ([CCode (array_length_pos = 1.9)] uchar[] sps);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static uchar codec_utils_h264_get_level_idc (string level);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static unowned string codec_utils_h264_get_profile ([CCode (array_length_pos = 1.9)] uchar[] sps);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static bool codec_utils_mpeg4video_caps_set_level_and_profile (Gst.Caps caps, [CCode (array_length_pos = 2.9)] uchar[] vis_obj_seq);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static unowned string codec_utils_mpeg4video_get_level ([CCode (array_length_pos = 1.9)] uchar[] vis_obj_seq);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static unowned string codec_utils_mpeg4video_get_profile ([CCode (array_length_pos = 1.9)] uchar[] vis_obj_seq);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static GLib.List<Gst.EncodingTarget> encoding_list_all_targets (string categoryname);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static GLib.List<string> encoding_list_available_categories ();
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static Gst.InstallPluginsReturn install_plugins_async ([CCode (array_length = false)] string[] details, Gst.InstallPluginsContext? ctx, Gst.InstallPluginsResultFunc func);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static bool install_plugins_installation_in_progress ();
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static unowned string install_plugins_return_get_name (Gst.InstallPluginsReturn ret);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static bool install_plugins_supported ();
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static Gst.InstallPluginsReturn install_plugins_sync (string details, Gst.InstallPluginsContext ctx);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static bool is_missing_plugin_message (Gst.Message msg);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static string missing_decoder_installer_detail_new (Gst.Caps decode_caps);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static Gst.Message missing_decoder_message_new (Gst.Element element, Gst.Caps decode_caps);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static string missing_element_installer_detail_new (string factory_name);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static Gst.Message missing_element_message_new (Gst.Element element, string factory_name);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static string missing_encoder_installer_detail_new (Gst.Caps encode_caps);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static Gst.Message missing_encoder_message_new (Gst.Element element, Gst.Caps encode_caps);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static string missing_plugin_message_get_description (Gst.Message msg);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static string missing_plugin_message_get_installer_detail (Gst.Message msg);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static string missing_uri_sink_installer_detail_new (string protocol);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static Gst.Message missing_uri_sink_message_new (Gst.Element element, string protocol);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static string missing_uri_source_installer_detail_new (string protocol);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static Gst.Message missing_uri_source_message_new (Gst.Element element, string protocol);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static bool pb_utils_add_codec_description_to_tag_list (Gst.TagList taglist, string codec_tag, Gst.Caps caps);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static unowned string pb_utils_get_codec_description (Gst.Caps caps);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static unowned string pb_utils_get_decoder_description (Gst.Caps caps);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static unowned string pb_utils_get_element_description (string factory_name);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static unowned string pb_utils_get_encoder_description (Gst.Caps caps);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static unowned string pb_utils_get_sink_description (string protocol);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static unowned string pb_utils_get_source_description (string protocol);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static void pb_utils_init ();
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static void plugins_base_version (uint major, uint minor, uint micro, uint nano);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static unowned string plugins_base_version_string ();
}