package pl.jermey.externallibrary

import android.content.Context
import android.util.Log
import com.getkeepsafe.relinker.ReLinker

/**
 * Created by Karol Celebi on 01.03.2018.
 */

class NativeModule {

    external fun helloWorld(): String

    companion object {

        fun install(context: Context) {
            ReLinker.force()
                    .log { msg -> Log.d("externalLib", msg) }
                    .loadLibrary(context, "native-lib")
        }

        @JvmStatic
        fun hello(): String {
            return "Hi!"
        }

    }

}
