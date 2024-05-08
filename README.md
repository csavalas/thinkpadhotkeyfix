# Thinkpad Hotkey Fix
### Problem description: [https://www.reddit.com/r/thinkpad/comments/r18cbr/comment/l30weol/](https://www.reddit.com/r/thinkpad/comments/r18cbr/remapping_call_keys_f9_f10_f11/)
### Instructions:
* Download `update.reg` by:
    * ...visiting the following URL:
        * https://github.com/csavalas/thinkpadhotkeyfix/blob/8e8945b43b674be304bc3f32892fbe8f3fd17d38/update.reg
    * ...clicking the icon near the top right hand corner of the page
    * ...clicking the `'Download'` option
* Double-click the downloaded file to merge it with the registry
* Select Yes/OK on any confirmation dialogs that appear
* Done!

### Reference:
* The registry file creates/modifies the following keys:
   * `HKEY_LOCAL_MACHINE\SOFTWARE\Lenovo\ShortcutKey\AppLaunch\Ex_96`
   * `HKEY_LOCAL_MACHINE\SOFTWARE\Lenovo\ShortcutKey\AppLaunch\Ex_97`
   * `HKEY_LOCAL_MACHINE\SOFTWARE\Lenovo\ShortcutKey\AppLaunch\Ex_98`
   * `HKEY_CURRENT_USER\SOFTWARE\Microsoft\Windows\CurrentVersion\Uninstall\Teams`
